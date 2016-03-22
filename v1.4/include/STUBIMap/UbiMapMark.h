//
//  UbiMapMark.h
//  STUBIMap
//
//  Created by 刘涛 on 16/3/4.
//  Copyright © 2016年 ShiTu. All rights reserved.
//

#import "UbiMapModel.h"

/*mark_type 类型定义*/

#define ATM 1
#define BABY 2
#define CASHIER 3
#define DISABLE_TOILET 4
#define DOOR 5
#define ENTRANCE 6
#define EXIT 7
#define GOODS 8
#define LADDERS 9
#define LIFT 10
#define MEN 11
#define WOMEN 12
#define TOILET 13
#define RESTING_AREA 14
#define SERVICE 15
#define STAIRCASE 16
#define VENDOR 17


//mark数据模型，继承自UbiMapModel，有独有的属性

@interface UbiMapMark : UbiMapModel<NSCoding>

@property(assign,nonatomic)uint32_t type;

@end
