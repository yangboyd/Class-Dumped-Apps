//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface HMEDomainSlice : NSObject
{
    id _domainValue;
    NSArray *_slices;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *slices; // @synthesize slices=_slices;
@property(readonly, nonatomic) id domainValue; // @synthesize domainValue=_domainValue;
- (id)initWithDomainValue:(id)arg1 slices:(id)arg2;

@end

