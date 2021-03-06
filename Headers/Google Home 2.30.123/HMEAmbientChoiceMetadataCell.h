//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMESetupChoiceCollectionViewCell.h"

#import "HMEAmbientMetadataCell-Protocol.h"

@class NSString;
@protocol HMEAmbientMetadataCellDelegate, HMEAmbientMetadataObject;

@interface HMEAmbientChoiceMetadataCell : HMESetupChoiceCollectionViewCell <HMEAmbientMetadataCell>
{
    id <HMEAmbientMetadataObject> _object;
}

+ (struct CGSize)sizeOfCellForObject:(id)arg1 withMaxWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) id <HMEAmbientMetadataObject> object; // @synthesize object=_object;
- (void)prepareForReuse;
- (void)markSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateCellWithObject:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <HMEAmbientMetadataCellDelegate> ambientMetadataCellDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

