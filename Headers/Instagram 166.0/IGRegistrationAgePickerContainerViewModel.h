//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGRegistrationAgePickerTextFieldViewModel, NSDate, NSString;

@interface IGRegistrationAgePickerContainerViewModel : NSObject
{
    _Bool _nextEnabled;
    NSString *_feedbackText;
    NSDate *_placeholderDate;
    IGRegistrationAgePickerTextFieldViewModel *_textFieldViewModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGRegistrationAgePickerTextFieldViewModel *textFieldViewModel; // @synthesize textFieldViewModel=_textFieldViewModel;
@property(readonly, nonatomic) NSDate *placeholderDate; // @synthesize placeholderDate=_placeholderDate;
@property(readonly, nonatomic) _Bool nextEnabled; // @synthesize nextEnabled=_nextEnabled;
@property(readonly, nonatomic) NSString *feedbackText; // @synthesize feedbackText=_feedbackText;
- (id)initWithFeedbackText:(id)arg1 nextEnabled:(_Bool)arg2 placeholderDate:(id)arg3 textFieldViewModel:(id)arg4;

@end

