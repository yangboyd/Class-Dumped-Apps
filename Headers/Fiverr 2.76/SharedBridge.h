//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SharedBridge : NSObject
{
}

+ (id)addPaddingToImage:(id)arg1 padding:(id)arg2;
+ (void)writeInterger:(long long)arg1 key:(id)arg2;
+ (long long)readInteger:(id)arg1 defaultValue:(long long)arg2;
+ (void)writeBool:(_Bool)arg1 key:(id)arg2;
+ (_Bool)readBool:(id)arg1 default:(_Bool)arg2;
+ (void)writeValue:(id)arg1 key:(id)arg2;
+ (id)readValue:(id)arg1 default:(id)arg2;
+ (void)createAndPresentWebViewWithURL:(id)arg1 viewControllerToPresetOn:(id)arg2;
+ (void)presentSaveFileAlertOnViewContrller:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

