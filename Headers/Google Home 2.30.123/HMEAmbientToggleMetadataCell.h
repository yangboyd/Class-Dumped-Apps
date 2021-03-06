//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMEStereoCell.h"

#import "HMEAmbientMetadataCell-Protocol.h"

@class NSString, UIImageView, UISwitch;
@protocol HMEAmbientMetadataCellDelegate, HMEAmbientMetadataObject;

@interface HMEAmbientToggleMetadataCell : HMEStereoCell <HMEAmbientMetadataCell>
{
    id <HMEAmbientMetadataCellDelegate> _ambientMetadataCellDelegate;
    id <HMEAmbientMetadataObject> _object;
    UISwitch *_toggle;
    UIImageView *_imageView;
}

+ (struct CGSize)sizeOfCellForObject:(id)arg1 withMaxWidth:(double)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UISwitch *toggle; // @synthesize toggle=_toggle;
@property(retain, nonatomic) id <HMEAmbientMetadataObject> object; // @synthesize object=_object;
@property(nonatomic) __weak id <HMEAmbientMetadataCellDelegate> ambientMetadataCellDelegate; // @synthesize ambientMetadataCellDelegate=_ambientMetadataCellDelegate;
- (void)prepareForReuse;
- (void)markSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateCellWithObject:(id)arg1;
- (void)didTapSwitch:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

