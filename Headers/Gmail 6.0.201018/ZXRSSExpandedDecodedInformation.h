//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZXRSSExpandedDecodedObject.h"

@class NSString;

@interface ZXRSSExpandedDecodedInformation : ZXRSSExpandedDecodedObject
{
    _Bool _remaining;
    int _remainingValue;
    NSString *_theNewString;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool remaining; // @synthesize remaining=_remaining;
@property(readonly, nonatomic) int remainingValue; // @synthesize remainingValue=_remainingValue;
@property(readonly, copy, nonatomic) NSString *theNewString; // @synthesize theNewString=_theNewString;
- (id)initWithNewPosition:(int)arg1 newString:(id)arg2 remainingValue:(int)arg3;
- (id)initWithNewPosition:(int)arg1 newString:(id)arg2;

@end

