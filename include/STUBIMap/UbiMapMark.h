//
//  UbiMapMark.h
//  STUBIMap
//
//  Created by 刘涛 on 16/3/4.
//  Copyright © 2016年 ShiTu. All rights reserved.
//

#import "UbiMapModel.h"

//mark数据模型，继承自UbiMapModel，有独有的属性

@interface UbiMapMark : UbiMapModel

@property(assign,nonatomic)uint32_t type;

@end
