//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NFIToastViewModel, NSArray, NSDictionary, NSMutableArray;

@interface NFISceneLayoutModel : NSObject
{
    double _safeOffset;
    double _subTitleYPercent;
    NSArray *_choices;
    NSArray *_accessoryViews;
    NSArray *_genericViews;
    NFIToastViewModel *_toastViewModel;
    NSDictionary *_commonMetadata;
    NSDictionary *_layoutOverrides;
    NSDictionary *_layoutData;
    NSMutableArray *_choiceButtons;
    struct CGSize _canvasSize;
    CDStruct_1a09c4fc _config;
}

@property(retain, nonatomic) NSMutableArray *choiceButtons; // @synthesize choiceButtons=_choiceButtons;
@property(retain, nonatomic) NSDictionary *layoutData; // @synthesize layoutData=_layoutData;
@property(retain, nonatomic) NSDictionary *layoutOverrides; // @synthesize layoutOverrides=_layoutOverrides;
@property(retain, nonatomic) NSDictionary *commonMetadata; // @synthesize commonMetadata=_commonMetadata;
@property(readonly, nonatomic) NFIToastViewModel *toastViewModel; // @synthesize toastViewModel=_toastViewModel;
@property(nonatomic) CDStruct_1a09c4fc config; // @synthesize config=_config;
@property(readonly, nonatomic) NSArray *genericViews; // @synthesize genericViews=_genericViews;
@property(readonly, nonatomic) NSArray *accessoryViews; // @synthesize accessoryViews=_accessoryViews;
@property(readonly, nonatomic) NSArray *choices; // @synthesize choices=_choices;
@property(readonly, nonatomic) double subTitleYPercent; // @synthesize subTitleYPercent=_subTitleYPercent;
@property(readonly, nonatomic) struct CGSize canvasSize; // @synthesize canvasSize=_canvasSize;
@property(nonatomic) double safeOffset; // @synthesize safeOffset=_safeOffset;
- (void).cxx_destruct;
- (id)layoutDataForKey:(id)arg1;
- (id)flattenAnimations:(id)arg1;
- (id)getAnimationForId:(id)arg1 rect:(struct CGRect)arg2;
- (id)queueSelectedChoice;
- (id)buttons;
- (struct CGRect)accessoryViewRectAtIndex:(unsigned long long)arg1;
- (double)ratio;
- (void)appendGenericView:(id)arg1;
- (CDStruct_1a09c4fc)parseConfig:(id)arg1;
- (id)parsedAccessoryViews:(id)arg1;
- (id)parsedChoices:(id)arg1;
- (struct CGSize)parseCanvasSize:(id)arg1;
- (id)visualStateTransitionForState:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

