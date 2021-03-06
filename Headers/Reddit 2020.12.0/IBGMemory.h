//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Instabug/IBGProfileProtocol-Protocol.h>

@class NSDate, NSString;

@interface IBGMemory : NSObject <IBGProfileProtocol>
{
    double _totalMemory;
    double _usedMemory;
    NSDate *_date;
    long long _memoryWarningEventsCounter;
}

@property(nonatomic) long long memoryWarningEventsCounter; // @synthesize memoryWarningEventsCounter=_memoryWarningEventsCounter;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) double usedMemory; // @synthesize usedMemory=_usedMemory;
@property(nonatomic) double totalMemory; // @synthesize totalMemory=_totalMemory;
- (void).cxx_destruct;
- (id)profileDataDate;
- (id)toDictionaryWithTime:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

