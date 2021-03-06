//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMESpacesChipData-Protocol.h"

@class HMEMergingModel, NSArray, NSString;
@protocol HMESpacesChipActionDelegate;

@interface HMECompositeSpacesChipModelController : NSObject <HMESpacesChipData>
{
    id <HMESpacesChipActionDelegate> _spacesChipActionDelegate;
    NSArray *_dataSources;
    HMEMergingModel *_chipsModel;
}

+ (id)modelsForDataSources:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMEMergingModel *chipsModel; // @synthesize chipsModel=_chipsModel;
@property(readonly, nonatomic) NSArray *dataSources; // @synthesize dataSources=_dataSources;
@property(nonatomic) __weak id <HMESpacesChipActionDelegate> spacesChipActionDelegate; // @synthesize spacesChipActionDelegate=_spacesChipActionDelegate;
- (id)listChips;
- (id)initWithChipDataSources:(id)arg1 comparator:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

