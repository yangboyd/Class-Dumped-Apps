//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBAssetDataRequestHandleFactory : NSObject
{
}

+ (void)db_startDataRequest:(id)arg1;
+ (id)db_photoDataRequestHandleWithAsset:(id)arg1 requestSource:(unsigned long long)arg2 desiredRepresentation:(long long)arg3 canUseNetwork:(_Bool)arg4 transcodeToJpeg:(_Bool)arg5 completionCallback:(CDUnknownBlockType)arg6 logger:(id)arg7;
+ (id)db_videoDataRequestHandleWithAsset:(id)arg1 requestSource:(unsigned long long)arg2 canUseNetwork:(_Bool)arg3 completionCallback:(CDUnknownBlockType)arg4 logger:(id)arg5;
+ (id)createWithAsset:(id)arg1 requestSource:(unsigned long long)arg2 desiredRepresentation:(long long)arg3 canUseNetwork:(_Bool)arg4 transcodeToJpeg:(_Bool)arg5 completionCallback:(CDUnknownBlockType)arg6 logger:(id)arg7;

@end

