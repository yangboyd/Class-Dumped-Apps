//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIMMessage.h"

@class NSString;

@interface AWEIMRecallMessage : AWEIMMessage
{
    NSString *_recallUserID;
    unsigned long long _recallerRole;
}

- (void).cxx_destruct;
@property unsigned long long recallerRole; // @synthesize recallerRole=_recallerRole;
@property(retain, nonatomic) NSString *recallUserID; // @synthesize recallUserID=_recallUserID;
@property(readonly, nonatomic) _Bool recalledBySender;
- (id)initWithContentDict:(id)arg1;

@end

