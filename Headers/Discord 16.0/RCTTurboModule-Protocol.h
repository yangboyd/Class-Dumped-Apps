//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol RCTTurboModuleLookupDelegate;

@protocol RCTTurboModule <NSObject>

@optional
@property(nonatomic) __weak id <RCTTurboModuleLookupDelegate> turboModuleLookupDelegate;
- (shared_ptr_3725e3cd)getTurboModuleWithJsInvoker:(shared_ptr_54f0c00e)arg1;
@end

