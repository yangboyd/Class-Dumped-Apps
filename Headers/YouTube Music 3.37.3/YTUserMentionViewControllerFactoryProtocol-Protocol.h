//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController;
@protocol YTResponder, YTUserMentionViewControllerProtocol;

@protocol YTUserMentionViewControllerFactoryProtocol <NSObject>
- (UIViewController<YTUserMentionViewControllerProtocol> *)createUserMentionViewControllerWithUserMentionStyle:(unsigned long long)arg1 userMentionSource:(unsigned long long)arg2 parentResponder:(id <YTResponder>)arg3;
@end

