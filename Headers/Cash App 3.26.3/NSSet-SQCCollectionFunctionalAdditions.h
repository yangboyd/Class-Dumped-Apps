//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSSet.h>

#import <SquareCore/SQCCollectionFunctionalAdditions-Protocol.h>

@class NSString;

@interface NSSet (SQCCollectionFunctionalAdditions) <SQCCollectionFunctionalAdditions>
- (_Bool)SQC_allPassing:(CDUnknownBlockType)arg1;
- (_Bool)SQC_anyPassing:(CDUnknownBlockType)arg1;
- (id)SQC_flatten;
- (id)SQC_map:(CDUnknownBlockType)arg1;
- (id)SQC_filter:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

