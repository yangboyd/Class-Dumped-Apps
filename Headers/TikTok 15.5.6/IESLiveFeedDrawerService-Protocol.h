//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, UIViewController;
@protocol IESLiveFeedDrawerProvider;

@protocol IESLiveFeedDrawerService <NSObject>
- (NSDictionary *)urlsForEnterFrom:(NSString *)arg1 enterMethod:(NSString *)arg2;
- (_Bool)containsEnterFrom:(NSString *)arg1 enterMethod:(NSString *)arg2;
- (UIViewController *)viewControllerWithEnterFrom:(NSString *)arg1 enterMethod:(NSString *)arg2;
- (id <IESLiveFeedDrawerProvider>)feedDrawer;
@end

