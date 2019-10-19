//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSMutableArray;

@interface GIPWebViewHistory : NSObject <NSSecureCoding>
{
    NSMutableArray *history_;
    long long position_;
    _Bool loading_;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool loading; // @synthesize loading=loading_;
- (id)entryWithHTML:(id)arg1 baseURL:(id)arg2;
- (id)entryWithRequest:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)currentURL;
- (id)current;
- (id)back;
- (id)forward;
- (_Bool)canGoForward;
- (_Bool)canGoBack;
- (void)pushHTML:(id)arg1 baseURL:(id)arg2;
- (void)pushRequest:(id)arg1;
- (void)addHistoryEntry:(id)arg1;
- (void)clear;
- (void)dealloc;
- (id)init;

@end

