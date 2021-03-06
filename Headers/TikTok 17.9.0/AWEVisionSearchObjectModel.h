//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWERectPosition, AWEURLModel, NSString;

@interface AWEVisionSearchObjectModel : AWEBaseApiModel
{
    _Bool _isCurrentFrame;
    _Bool _pointViewTracked;
    _Bool _buttonShownTracked;
    _Bool _order;
    NSString *_title;
    NSString *_objectID;
    long long _objectType;
    AWEURLModel *_urlModel;
    AWERectPosition *_rectPosition;
    NSString *_queryID;
    NSString *_displayTitle;
}

+ (id)urlModelJSONTransformer;
+ (id)rectPositionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(nonatomic) _Bool order; // @synthesize order=_order;
@property(nonatomic) _Bool buttonShownTracked; // @synthesize buttonShownTracked=_buttonShownTracked;
@property(nonatomic) _Bool pointViewTracked; // @synthesize pointViewTracked=_pointViewTracked;
@property(copy, nonatomic) NSString *displayTitle; // @synthesize displayTitle=_displayTitle;
@property(copy, nonatomic) NSString *queryID; // @synthesize queryID=_queryID;
@property(nonatomic) _Bool isCurrentFrame; // @synthesize isCurrentFrame=_isCurrentFrame;
@property(retain, nonatomic) AWERectPosition *rectPosition; // @synthesize rectPosition=_rectPosition;
@property(retain, nonatomic) AWEURLModel *urlModel; // @synthesize urlModel=_urlModel;
@property(nonatomic) long long objectType; // @synthesize objectType=_objectType;
@property(copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

