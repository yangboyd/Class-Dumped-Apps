//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, YTIAccountItemRenderer;

@protocol YTInlineSignInLayoutConfig <NSObject>
@property(readonly, nonatomic) long long preferredInterfaceOrientation;
@property(readonly, nonatomic) unsigned long long supportedInterfaceOrientations;
@property(readonly, nonatomic) NSString *signInTitle;
- (_Bool)canSignInWithAccountItem:(YTIAccountItemRenderer *)arg1;
@end

