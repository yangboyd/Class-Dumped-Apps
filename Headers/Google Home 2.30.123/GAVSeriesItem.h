//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GAVSeriesItem-Protocol.h"

@class NSNumber, NSString;

@interface GAVSeriesItem : NSObject <GAVSeriesItem>
{
    id _domainValue;
    NSNumber *_measureValue;
    NSNumber *_measureOffsetValue;
    NSNumber *_measureWithOffsetValue;
    id _datum;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) id datum; // @synthesize datum=_datum;
@property(readonly, copy, nonatomic) NSNumber *measureWithOffsetValue; // @synthesize measureWithOffsetValue=_measureWithOffsetValue;
@property(readonly, copy, nonatomic) NSNumber *measureOffsetValue; // @synthesize measureOffsetValue=_measureOffsetValue;
@property(readonly, copy, nonatomic) NSNumber *measureValue; // @synthesize measureValue=_measureValue;
@property(readonly, copy, nonatomic) id domainValue; // @synthesize domainValue=_domainValue;
- (id)initWithDomainValue:(id)arg1 measureValue:(id)arg2 datum:(id)arg3;
- (id)initWithDomainValue:(id)arg1 measureValue:(id)arg2 measureOffsetValue:(id)arg3 datum:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

