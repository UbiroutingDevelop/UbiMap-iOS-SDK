//
//  FileManagerDown.h
//  OpenGL-ES
//
//  Created by 刘涛 on 16/1/27.
//  Copyright © 2016年 ShiTu. All rights reserved.
//

//请确保downResourceWithStatus方法返回状态status为‘1’或者‘2’时，再调用downMapsWithMapId方法载入map，并确认该状态码status返回为1或者2是，再载入对应的mapFile文件

#import <Foundation/Foundation.h>

#define OK 1
#define NO_NEED 2
#define FAILEDS 3

typedef void (^statusBlock)(int status);

@interface UbiMapDownloader : NSObject

@property(weak,nonatomic)statusBlock status;

/**
 *  清楚缓存文件
 */
+ (void)removeMapAndZipfile;
/**
 *  载入资源文件
 *
 *  @param complete 状态返回  返回参数status有三种情况 status==1:OK ,status==2:NO NEED ,status==3:FAILED
 */
- (void)downResourceWithStatus:(statusBlock)complete;
/**
 *  载入地图文件
 *
 *  @param mapId    mapID
 *  @param complete 状态返回  返回参数status有三种情况 status==1:OK ,status==2:NO NEED ,status==3:FAILED
 */
- (void)downMapsWithMapId:(NSInteger)mapId Status:(statusBlock)complete;
/**
 *  无网络连接时调用此方法载入本地地图
 *
 *  @param mapId mapID
 *
 *  @return map准备状态 YES：可离线加载本地地图，NO：本地不存在该图
 */
- (BOOL)isMapReady:(NSInteger)mapId;



@end
