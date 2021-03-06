//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDKTheme, NSSet, NSString;

@interface GDKRequestApprovalsParams : NSObject
{
    _Bool _showLockWarning_15;
    _Bool _showDueDatePicker_17;
    int _maxApproverCount_16;
    NSString *_headerTitle_11;
    NSString *_approverPickerPlaceholder_25;
    NSSet *_existingReviewers_17;
    NSString *_initialComment_14;
    GDKTheme *_theme_5;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GDKTheme *theme; // @synthesize theme=_theme_5;
@property(readonly, copy, nonatomic) NSString *initialComment; // @synthesize initialComment=_initialComment_14;
@property(readonly, nonatomic) _Bool showDueDatePicker; // @synthesize showDueDatePicker=_showDueDatePicker_17;
@property(readonly, nonatomic) _Bool showLockWarning; // @synthesize showLockWarning=_showLockWarning_15;
@property(readonly, nonatomic) NSSet *existingReviewers; // @synthesize existingReviewers=_existingReviewers_17;
@property(readonly, nonatomic) int maxApproverCount; // @synthesize maxApproverCount=_maxApproverCount_16;
@property(readonly, copy, nonatomic) NSString *approverPickerPlaceholder; // @synthesize approverPickerPlaceholder=_approverPickerPlaceholder_25;
@property(readonly, copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle_11;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithHeaderTitle:(id)arg1 approverPickerPlaceholder:(id)arg2 maxApproverCount:(int)arg3 existingReviewers:(id)arg4 showLockWarning:(_Bool)arg5 showDueDatePicker:(_Bool)arg6 initialComment:(id)arg7 theme:(id)arg8;

@end

