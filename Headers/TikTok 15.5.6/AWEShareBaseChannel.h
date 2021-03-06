//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEShareChannel-Protocol.h"

@class NSString;

@interface AWEShareBaseChannel : NSObject <AWEShareChannel>
{
}

@property(readonly, copy) NSString *description;
- (void)shareWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)makeItemWithContext:(id)arg1 inView:(id)arg2;
- (id)shareImageForStyle:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSString *shareTitle;
@property(readonly, copy, nonatomic) NSString *trackingLabel;
@property(readonly, nonatomic) long long shareCategory;
@property(readonly, copy, nonatomic) NSString *shareType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

