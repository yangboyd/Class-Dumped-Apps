//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@interface GDCApprovalEvent_DueTimeChangeEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long dueTimeMillis; // @dynamic dueTimeMillis;
@property(nonatomic) _Bool hasDueTimeMillis; // @dynamic hasDueTimeMillis;
@property(nonatomic) _Bool hasPriorDueTimeMillis; // @dynamic hasPriorDueTimeMillis;
@property(nonatomic) long long priorDueTimeMillis; // @dynamic priorDueTimeMillis;

@end

