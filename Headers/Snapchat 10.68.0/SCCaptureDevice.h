//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCCaptureDevice : NSObject
{
}

+ (void)requestAccessForMediaType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (long long)authorizationStatusForMediaType:(id)arg1;
+ (id)defaultDeviceWithDeviceType:(id)arg1 mediaType:(id)arg2 position:(long long)arg3;

@end

