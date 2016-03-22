//
//  UbiLoader.h
//  STUBIMap
//
//  Created by 刘涛 on 16/2/24.
//  Copyright © 2016年 ShiTu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UbiLoader : NSObject

@property(strong,nonatomic)NSString *Appkey;

/**
 *   application运行前要调用此方法验证Appkey，验证通过后才能进行之后的操作，
 *
 *  @param key Appkey
 *
 *  @return single object
 */
+(UbiLoader *)registWithKey:(NSString *)key;

@end



