#ifndef _GNSS_MATH_UTILITY_INTERFACE_H_
#define _GNSS_MATH_UTILITY_INTERFACE_H_

#include "../DllMain/GNSSCommonStruct.h"

namespace sixents
{
    namespace GNSSMathUtilityLib
    {
        class CMathAppInterface
        {
        public:
            /**
             * @brief           矩阵加法
             * @author          pengshupan@sixents.com
             * @param[in]       inLeftMatrix            运算符左边的矩阵
             * @param[in]       inRightMatrix           运算符左边的矩阵
             * @param[out]      outMatrix               输出矩阵
             * @exception       N/A
             * @return          函数执行是否成功
             * @note            N/A
             */
            static INT32 MatrixAdd(const DOUBLE* leftMatrixData,
                                   const UINT32 leftRow,
                                   const UINT32 leftCol,
                                   const DOUBLE* rightMatrixData,
                                   const UINT32 rightRow,
                                   const UINT32 rightCol,
                                   DOUBLE* outMatrixData,
                                   UINT32& outRow,
                                   UINT32& outCol);

            /**
             * @brief           矩阵减法
             * @author          pengshupan@sixents.com
             * @param[in]       inLeftMatrix            运算符左边的矩阵
             * @param[in]       inRightMatrix           运算符左边的矩阵
             * @param[out]      outMatrix               输出矩阵
             * @exception       N/A
             * @return          函数执行是否成功
             * @note            N/A
             */
            static INT32 MatrixSub(const DOUBLE* leftMatrixData,
                                   const UINT32 leftRow,
                                   const UINT32 leftCol,
                                   const DOUBLE* rightMatrixData,
                                   const UINT32 rightRow,
                                   const UINT32 rightCol,
                                   DOUBLE* outMatrixData,
                                   UINT32& outRow,
                                   UINT32& outCol);

            /**
             * @brief           矩阵乘法
             * @author          pengshupan@sixents.com
             * @param[in]       inLeftMatrix            运算符左边的矩阵
             * @param[in]       inRightMatrix           运算符左边的矩阵
             * @param[out]      outMatrix               输出矩阵
             * @exception       N/A
             * @return          函数执行是否成功
             * @note            N/A
             */
            static INT32 MatrixMul(const DOUBLE* leftMatrixData,
                                   const UINT32 leftRow,
                                   const UINT32 leftCol,
                                   const DOUBLE* rightMatrixData,
                                   const UINT32 rightRow,
                                   const UINT32 rightCol,
                                   DOUBLE* outMatrixData,
                                   UINT32& outRow,
                                   UINT32& outCol);

            /**
             * @brief           矩阵转置
             * @author          pengshupan@sixents.com
             * @param[in]       inMatrix                转置前的矩阵
             * @param[out]      outMatrix               输出矩阵
             * @exception       N/A
             * @return          函数执行是否成功
             * @note            N/A
             */
            static INT32 MatrixTransposition(const DOUBLE* inMatrixData,
                                             const UINT32 inRow,
                                             const UINT32 inCol,
                                             DOUBLE* outMatrixData,
                                             UINT32& outRow,
                                             UINT32& outCol);

            /**
             * @brief           矩阵求逆
             * @author          pengshupan@sixents.com
             * @param[in]       inMatrix                待求逆矩阵
             * @param[out]      outMatrix               输出矩阵
             * @exception       N/A
             * @return          函数执行是否成功
             * @note            N/A
             */
            static INT32 MatrixInverse(const DOUBLE* inMatrixData,
                                       const UINT32 inRow,
                                       const UINT32 inCol,
                                       DOUBLE* outMatrixData,
                                       UINT32& outRow,
                                       UINT32& outCol);

            /**
             * @brief           矩阵增加行列
             * @author          pengshupan@sixents.com
             * @param[in]       inMatrix            待增加行列的矩阵
             * @param[in]       row                 指定增加的行
             * @param[out]      col                 指定增加的列
             * @exception       N/A
             * @return          函数执行是否成功
             * @note            N/A
             */
            static INT32 MatrixAddRowCol(const DOUBLE* inMatrixData,
                                         const UINT32 inRow,
                                         const UINT32 inCol,
                                         DOUBLE* outMatrixData,
                                         UINT32& outRow,
                                         UINT32& outCol);

            /**
             * @brief           矩阵减少行列
             * @author          pengshupan@sixents.com
             * @param[in]       inMatrix            待减少行列的矩阵
             * @param[in]       row                 指定减少的行
             * @param[out]      col                 指定减少的列
             * @exception       N/A
             * @return          函数执行是否成功
             * @note            N/A
             */
            static INT32 MatrixSubRowCol(const DOUBLE* inMatrixData,
                                         const UINT32 inRow,
                                         const UINT32 inCol,
                                         DOUBLE* outMatrixData,
                                         UINT32& outRow,
                                         UINT32& outCol);
        };
    } // end namespace GNSSMathUtilityLib
} // end namespace sixents

#endif