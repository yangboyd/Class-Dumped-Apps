//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/PRMCollectionOptions.h>

@interface PRMMemoryCollectionOptions : PRMCollectionOptions
{
    _Bool _mallocMetricsEnabled;
    _Bool _mallocZonePressureReliefEnabled;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property _Bool mallocZonePressureReliefEnabled;
@property _Bool mallocMetricsEnabled;

@end

