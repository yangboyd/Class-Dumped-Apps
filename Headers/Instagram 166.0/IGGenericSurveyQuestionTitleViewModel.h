//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGGenericSurveyIndexingInfo, NSString;

@interface IGGenericSurveyQuestionTitleViewModel : NSObject
{
    _Bool _enableNavigation;
    NSString *_titleText;
    long long _verticalPadding;
    IGGenericSurveyIndexingInfo *_indexingInfo;
    unsigned long long _navBarButtonStatus;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long navBarButtonStatus; // @synthesize navBarButtonStatus=_navBarButtonStatus;
@property(readonly, nonatomic) IGGenericSurveyIndexingInfo *indexingInfo; // @synthesize indexingInfo=_indexingInfo;
@property(readonly, nonatomic) _Bool enableNavigation; // @synthesize enableNavigation=_enableNavigation;
@property(readonly, nonatomic) long long verticalPadding; // @synthesize verticalPadding=_verticalPadding;
@property(readonly, copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (id)initWithTitleText:(id)arg1 verticalPadding:(long long)arg2 enableNavigation:(_Bool)arg3 indexingInfo:(id)arg4;

@end

