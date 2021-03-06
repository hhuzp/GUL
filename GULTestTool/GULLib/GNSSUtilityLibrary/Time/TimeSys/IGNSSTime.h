﻿/** @file          IGNSSTime.h
 *  @brief         时间父类
 *  @details       时间对象的基类
 *  @author        wuchuanfei@sixens.com
 *  @date          2020/04/24
 *  @version       1.0
 *  @note          N/A
 *  @copyright     Copyright(c) 2019-2020 Beijing Sixents Technology Co., Ltd. All rights reserved.
 */

#ifndef IGNSS_TIME_H
#define IGNSS_TIME_H

#include <string>

#include "../../DllMain/GNSSCommonDef.h"
#include "../../DllMain/GNSSDataStruct.h"

namespace sixents
{
    namespace Math
    {
        /**
         *  @class       IGNSSTime
         *  @brief       时间父类
         *  @author      wuchuanfei@sixents.com
         *  @note        时间对象的基类
         */
        class IGNSSTime
        {
        public:
            /**
             * @brief          构造函数
             * @author         wuchuanfei@sixents.com
             * @param[in]      timeType             时间类型，目前仅支持TIME_TYPE中定义的几种时间类型
             * @param[out]     N/A
             * @exception      N/A
             * @return         N/A
             * @note           N/A
             */
            explicit IGNSSTime(const TIME_TYPE timeType);

            /**
             * @brief          析构函数
             * @author         wuchuanfei@sixents.com
             * @param[in]      N/A
             * @param[out]     N/A
             * @exception      N/A
             * @return         N/A
             * @note           N/A
             */
            virtual ~IGNSSTime();

            /**
             * @brief          设置小数形式的时间到对象的接口
             * @author         wuchuanfei@sixents.com
             * @param[in]      time         时间数据
             * @param[out]     N/A
             * @exception      N/A
             * @return         N/A
             * @note           N/A
             */
            virtual void SetTime(const DOUBLE& time);

            /**
             * @brief          从对象中获取小数形式的时间的接口
             * @author         wuchuanfei@sixents.com
             * @param[in]      N/A
             * @param[out]     time         小数形式的时间数据
             * @exception      N/A
             * @return         N/A
             * @note           N/A
             */
            virtual void GetTime(DOUBLE& time);

            /**
             * @brief          以标准时间格式设置时间的接口
             * @author         wuchuanfei@sixents.com
             * @param[in]      time         标准时间格式的时间数据
             * @param[out]     N/A
             * @exception      N/A
             * @return         N/A
             * @note           N/A
             */
            virtual void SetTime(const SStandardTime& time);

            /**
             * @brief          从对象中获取标准时间格式的时间的接口
             * @author         wuchuanfei@sixents.com
             * @param[in]      N/A
             * @param[out]     time         标准时间格式的时间数据
             * @exception      N/A
             * @return         N/A
             * @note           N/A
             */
            virtual void GetTime(SStandardTime& time);

            /**
             * @brief          以周内秒时间格式设置时间的接口
             * @author         wuchuanfei@sixents.com
             * @param[in]      time         周内秒格式的时间数据
             * @param[out]     N/A
             * @exception      N/A
             * @return         N/A
             * @note           N/A
             */
            virtual void SetTime(const SGNSSTime& time);

            /**
             * @brief          从对象中获取周内秒格式的时间的接口
             * @author         wuchuanfei@sixents.com
             * @param[in]      N/A
             * @param[out]     time         周内秒格式的时间数据
             * @exception      N/A
             * @return         N/A
             * @note           N/A
             */
            virtual void GetTime(SGNSSTime& time);

            /**
             * @brief          以年月日时分秒格式对时间进行格式化的接口
             * @author         wuchuanfei@sixents.com
             * @param[in]      N/A
             * @param[out]     formatString: 格式化后的字符串
             * @exception      N/A
             * @return         N/A
             * @note           N/A
             */
            virtual INT32 Format(std::string& formatString) = 0;

            /**
             * @brief          当前时间转为小数形式的接口
             * @author         wuchuanfei@sixents.com
             * @param[in]      N/A
             * @param[out]     N/A
             * @exception      N/A
             * @return         N/A
             * @note           N/A
             */
            virtual void ToSec() = 0;

            /**
             * @brief          当前时间转为小数形式的接口
             * @author         wuchuanfei@sixents.com
             * @param[in]      N/A
             * @param[out]     time         转换后的时间
             * @exception      N/A
             * @return         N/A
             * @note           N/A
             */
            virtual void ToSec(DOUBLE& time) = 0;

            /**
             * @brief          把时间转为标准时间结构的接口
             * @author         wuchuanfei@sixents.com
             * @param[in]      N/A
             * @param[out]     time         转换后的时间
             * @exception      N/A
             * @return         N/A
             * @note           N/A
             */
            virtual void ToStandTime(SStandardTime& time) = 0;

            /**
             * @brief          把时间转为标准时间结构的接口
             * @author         wuchuanfei@sixents.com
             * @param[in]      N/A
             * @param[out]     N/A
             * @exception      N/A
             * @return         N/A
             * @note           N/A
             */
            virtual void ToStandTime() = 0;

            /**
             * @brief          把时间转为周内秒结构的接口
             * @author         wuchuanfei@sixents.com
             * @param[in]      N/A
             * @param[out]     time         转换后的时间
             * @exception      N/A
             * @return         N/A
             * @note           只有支持周内秒格式的时间才需要用到此函数
             */
            virtual void ToWeekSec(SGNSSTime& time);

            /**
             * @brief          获取当前时间的时间类型
             * @author         wuchuanfei@sixents.com
             * @param[in]      N/A
             * @param[out]     N/A
             * @exception      N/A
             * @return         当前时间类型
             * @note           N/A
             */
            UINT32 GetTimeType();

            /**
             * @brief          标准时间转秒
             * @author         wuchuanfei@sixents.com
             * @param[in]      stdTime          标准时间格式的时间数据
             * @param[out]     N/A
             * @exception      N/A
             * @return         与标准时间同一标准下的小数秒
             * @note           N/A
             */
            static DOUBLE StandTimeToSec(const SStandardTime& stdTime);

            /**
             * @brief          秒转标准时间
             * @author         wuchuanfei@sixents.com
             * @param[in]      sec          小数秒格式的时间
             * @param[out]     stdTime      标准时间格式的时间
             * @exception      N/A
             * @return         当前函数执行是否成功
             * @note           N/A
             */
            static INT32 SecToStandTime(const DOUBLE sec, SStandardTime& stdTime);

            /**
             * @brief          周内秒时间转秒
             * @author         wuchuanfei@sixents.com
             * @param[in]      stdTime      周内秒格式的时间
             * @param[in]      startTime    当前时间系统的起算时间
             * @param[out]     N/A
             * @exception      N/A
             * @return         转换后的小数秒时间
             * @note           N/A
             */
            static DOUBLE WeekSecToSec(const SGNSSTime& stdTime, const UINT64 startTime);

            /**
             * @brief          秒转周内秒
             * @author         wuchuanfei@sixents.com
             * @param[in]      sec              小数秒时间
             * @param[in]      startTime        当前时间系统的起算时间
             * @param[out]     stdTime          转换后的周内秒时间
             * @exception      N/A
             * @return         当前函数执行是否成功
             * @note           N/A
             */
            static INT32 SecToWeekSec(const DOUBLE sec, const UINT64 startTime, SGNSSTime& stdTime);

            /**
             * @brief          判断当前日期是否正确
             * @author         wuchuanfei@sixents.com
             * @param[in]      time              当前时间
             * @param[out]     N/A
             * @exception      N/A
             * @return         是否正确日期，true为正确日期，false为错误日期
             * @note           N/A
             */
            static BOOL_T IsRightDay(const SStandardTime& time);

            // 闰月判断
            /**
             * @brief          判断当前年是否闰年
             * @author         wuchuanfei@sixents.com
             * @param[in]      time              当前年
             * @param[out]     N/A
             * @exception      N/A
             * @return         是否闰年，true为闰年，false为非闰年
             * @note           N/A
             */
            static BOOL_T IsLeapYear(const UINT32& time);

            /**
             * @brief          获取二月中的天数
             * @author         wuchuanfei@sixents.com
             * @param[in]      leapYear          是否闰年，true为闰年，false为非闰年
             * @param[out]     N/A
             * @exception      N/A
             * @return         二月中的天数
             * @note           N/A
             */
            static UINT32 GetDayInFeb(const BOOL_T leapYear);

            /**
             * @brief          获取月份类型(大月、小月)
             * @author         wuchuanfei@sixents.com
             * @param[in]      month              当前月份
             * @param[out]     N/A
             * @exception      N/A
             * @return         月份类型
             * @note           N/A
             */
            static MONTH_TYPE GetMonthType(const UINT32& month);

        private:
            UINT32 m_timeType; ///< 存放时间,便于直接使用父类指针直接获取对象类型
        };                     // end class IGNSSTime
    }                          // end namespace Math
} // end namespace sixents

#endif
