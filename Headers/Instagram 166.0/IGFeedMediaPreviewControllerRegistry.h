//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IGFeedMediaPreviewControllerRegistry : NSObject
{
    NSArray *_controllerClasses;
}

+ (id)registryWithMediaPreviewControllerClasses:(id)arg1;
+ (id)defaultRegistry;
- (void).cxx_destruct;
- (id)mediaPreviewControllerWithMedia:(id)arg1 previewContext:(id)arg2 module:(id)arg3 userSession:(id)arg4 loggingExtras:(id)arg5;
- (Class)mediaPreviewControllerClassWithMedia:(id)arg1;
- (id)initWithMediaPreviewControllerClasses:(id)arg1;

@end

