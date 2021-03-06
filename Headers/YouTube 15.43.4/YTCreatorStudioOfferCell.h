//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCollectionViewCell.h>

#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTResponder-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class NSMutableArray, NSString, YTICreatorStudioOfferRenderer;
@protocol YTResponder;

@interface YTCreatorStudioOfferCell : YTCollectionViewCell <YTCollectionViewCellProtocol, YTResponder, YTThumbnailMapping>
{
    NSMutableArray *_sections;
    NSMutableArray *_separators;
    id <YTResponder> _parentResponder;
    YTICreatorStudioOfferRenderer *_entry;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) YTICreatorStudioOfferRenderer *entry; // @synthesize entry=_entry;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (id)thumbnailMappings;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

