//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, UIView;
@protocol GOOTextFieldTraits><GOOValidatedTextField;

@protocol GOOTextFieldValidator <NSObject>

@optional
@property(readonly, nonatomic) long long announcementFrequency;
- (unsigned long long)validateEventsForTextField:(UIView<GOOTextFieldTraits><GOOValidatedTextField> *)arg1;
- (NSDictionary *)validationResultsForTextField:(UIView<GOOTextFieldTraits><GOOValidatedTextField> *)arg1;
@end

