//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBPhotoAnalytics : NSObject
{
}

+ (unsigned long long)db_getADLAssetDataFetchSourceType:(unsigned long long)arg1;
+ (void)logVideoFetchFailedEventWithAsset:(id)arg1 requestSource:(unsigned long long)arg2 fetchResponse:(id)arg3 videoDataInitError:(id)arg4 fetchType:(unsigned long long)arg5 isInCloud:(_Bool)arg6 logger:(id)arg7;
+ (void)logPhotoFetchFailedEventWithAsset:(id)arg1 requestSource:(unsigned long long)arg2 error:(id)arg3 imageData:(id)arg4 isInCloud:(_Bool)arg5 logger:(id)arg6;

@end

