//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WamEvent.h>

@interface WamEventMdAppStateSyncDaily : WamEvent
{
    double _invalid_action_count;
    double _mutation_count;
    double _unsupported_action_count;
}

@property(nonatomic) double unsupported_action_count; // @synthesize unsupported_action_count=_unsupported_action_count;
@property(nonatomic) double mutation_count; // @synthesize mutation_count=_mutation_count;
@property(nonatomic) double invalid_action_count; // @synthesize invalid_action_count=_invalid_action_count;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (int)getChannel;
- (id)init;

@end

