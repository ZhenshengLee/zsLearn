#include <iomanip>
#include <iostream>
#include <string>

#include "helloWorld.h"
#include "log4cplus/consoleappender.h"
#include "log4cplus/helpers/sleep.h"
#include "log4cplus/layout.h"
#include "log4cplus/logger.h"
#include "log4cplus/loggingmacros.h"
#include "log4cplus/loglevel.h"

using namespace std;
using namespace log4cplus;
using namespace log4cplus::helpers;

int main()
{
    // 初始化日志系统
    log4cplus::initialize();
    /* step 1: Instantiate an appender object */
    SharedAppenderPtr _append(new ConsoleAppender(false, true));
    _append->setName(LOG4CPLUS_TEXT("First"));

    /* step 2: Instantiate a layout object */
    // 应该用内部类型tstring
    // std::string pattern = "%d{%m/%d/%y %H:%M:%S}  - %m [%l]%n";
    // log4cplus::tstring pattern = LOG4CPLUS_TEXT("%d{%m/%d/%y %H:%M:%S,%Q} [%t] %-5p %c{2} %%%x%% - %X{key} - %m
    // [%l]%n"); std::auto_ptr<Layout> _layout(new PatternLayout(pattern));

    /* step 3: Attach the layout object to the appender */
    // _append->setLayout( _layout );
    Layout *_layout;
    _append->setLayout(std::auto_ptr<Layout>(_layout = new log4cplus::SimpleLayout));

    // /* step 4: Instantiate a logger object */
    Logger _logger = Logger::getRoot();

    // /* step 5: Attach the appender object to the logger  */
    _logger.addAppender(_append);

    // /* step 6: Set a priority for the logger  */
    _logger.setLogLevel(ALL_LOG_LEVEL);
    // /* log activity */
    LOG4CPLUS_WARN(_logger, "This is the THIRD log message...");
    sleep(1, 0);
    LOG4CPLUS_WARN(_logger, "This is the SECOND log message...");

    // 初始化业务
    int radius;
    cout << "Please input the radius of the circle" << endl;
    // cin >> radius;
    radius = 3;
    if (0 > radius)
    {
        LOG4CPLUS_FATAL(_logger, "This is a fatal double: the radius is invalid" << setprecision(15) << radius);
        return -1;
    }
    helloWorld helloWorld_circle(radius);
    LOG4CPLUS_WARN(_logger, "Hello, world");
    // LOG4CPLUS_DEBUG(_logger, "The radius is: " << radius);
    // LOG4CPLUS_WARN(_logger, "the area of helloWorld_circle is: " << helloWorld_circle.getArea() << endl;

    return 0;
}
