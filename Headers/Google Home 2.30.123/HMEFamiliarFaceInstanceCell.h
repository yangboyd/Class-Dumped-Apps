//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMEBaseCell.h"

@class HMEFaceInstanceImageView, HMEFamiliarFaceSelectableView;

@interface HMEFamiliarFaceInstanceCell : HMEBaseCell
{
    HMEFaceInstanceImageView *_faceInstanceImageView;
    HMEFamiliarFaceSelectableView *_selectableFaceView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HMEFamiliarFaceSelectableView *selectableFaceView; // @synthesize selectableFaceView=_selectableFaceView;
@property(readonly, nonatomic) HMEFaceInstanceImageView *faceInstanceImageView; // @synthesize faceInstanceImageView=_faceInstanceImageView;
- (void)prepareForReuse;
@property(nonatomic) long long state;
- (void)updateWithFaceInstance:(id)arg1 forFace:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

