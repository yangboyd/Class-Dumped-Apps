//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SIGTaggedString;

@interface SIGSortedIndexEntityTuple : NSObject
{
    NSObject *_entity;
    SIGTaggedString *_string;
}

@property(readonly, nonatomic) SIGTaggedString *string; // @synthesize string=_string;
@property(readonly, nonatomic) NSObject *entity; // @synthesize entity=_entity;
- (void).cxx_destruct;
- (id)initWithEntity:(id)arg1 taggedString:(id)arg2;

@end

