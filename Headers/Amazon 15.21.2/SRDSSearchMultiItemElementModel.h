//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, SRDSSearchImageModel, SRDSSearchLinkModel;
@protocol SRDSSearchStyledTextModel;

@interface SRDSSearchMultiItemElementModel : JSONModel
{
    SRDSSearchImageModel *_image;
    SRDSSearchLinkModel *_link;
    NSArray<SRDSSearchStyledTextModel> *_caption;
}

@property(retain, nonatomic) NSArray<SRDSSearchStyledTextModel> *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) SRDSSearchLinkModel *link; // @synthesize link=_link;
@property(retain, nonatomic) SRDSSearchImageModel *image; // @synthesize image=_image;
- (void).cxx_destruct;

@end

