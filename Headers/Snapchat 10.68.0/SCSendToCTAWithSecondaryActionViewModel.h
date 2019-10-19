//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, SCActionModel, UIImage;

@interface SCSendToCTAWithSecondaryActionViewModel : NSObject <NSCopying>
{
    NSAttributedString *_labelText;
    UIImage *_leftImage;
    UIImage *_rightImage;
    SCActionModel *_primaryTapActionModel;
    SCActionModel *_secondaryTapActionModel;
    double _cellHeight;
}

@property(readonly, nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(readonly, copy, nonatomic) SCActionModel *secondaryTapActionModel; // @synthesize secondaryTapActionModel=_secondaryTapActionModel;
@property(readonly, copy, nonatomic) SCActionModel *primaryTapActionModel; // @synthesize primaryTapActionModel=_primaryTapActionModel;
@property(readonly, copy, nonatomic) UIImage *rightImage; // @synthesize rightImage=_rightImage;
@property(readonly, copy, nonatomic) UIImage *leftImage; // @synthesize leftImage=_leftImage;
@property(readonly, copy, nonatomic) NSAttributedString *labelText; // @synthesize labelText=_labelText;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLabelText:(id)arg1 leftImage:(id)arg2 rightImage:(id)arg3 primaryTapActionModel:(id)arg4 secondaryTapActionModel:(id)arg5 cellHeight:(double)arg6;

@end

