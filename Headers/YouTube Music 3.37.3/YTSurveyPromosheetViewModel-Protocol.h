//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSMutableArray, YTIButtonSupportedRenderers, YTIFormattedString;

@protocol YTSurveyPromosheetViewModel <NSObject>
@property(readonly, nonatomic) unsigned long long optionsArray_Count;
@property(readonly, nonatomic) NSMutableArray *optionsArray;
@property(readonly, nonatomic) _Bool hasOkButton;
@property(readonly, nonatomic) YTIButtonSupportedRenderers *okButton;
@property(readonly, nonatomic) _Bool hasDismissalText;
@property(readonly, nonatomic) YTIFormattedString *dismissalText;
@property(readonly, nonatomic) _Bool hasQuestion;
@property(readonly, nonatomic) YTIFormattedString *question;
@property(readonly, nonatomic) NSArray *vmOptionsArray;
@property(readonly, nonatomic) _Bool vmIsVertical;
@end

