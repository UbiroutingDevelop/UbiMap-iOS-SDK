//
//  UbiMapArea.h
//  STUBIMap
//
//  Created by 刘涛 on 16/3/4.
//  Copyright © 2016年 ShiTu. All rights reserved.
//

#import "UbiMapModel.h"

/*area_type 类型定义*/

#define AREA_WALL 30
#define AREA_EMPTY 31
#define AREA_SHOP 1
#define AREA_FOOD 2
#define AREA_PARK 0
#define AREA_OFFICE 3
#define AREA_FUNCTIONAL 4
#define AREA_UNKNOWN 99

//area数据模型，继承自UbiMapModel，有独有的属性

@interface UbiMapArea : UbiMapModel<NSCoding>

@property(strong,nonatomic)NSString *name;

@property(assign,nonatomic)uint32_t type;

@end
