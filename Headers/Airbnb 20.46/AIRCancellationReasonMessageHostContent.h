//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSString;

@interface AIRCancellationReasonMessageHostContent : AIRModel
{
    NSString *_messageHostPageHeader;
    NSString *_messageBoxTitle;
    NSString *_defaultMessage;
    NSString *_messageBoxFooter;
    NSString *_ctaButtonText;
}

+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *ctaButtonText; // @synthesize ctaButtonText=_ctaButtonText;
@property(readonly, copy, nonatomic) NSString *messageBoxFooter; // @synthesize messageBoxFooter=_messageBoxFooter;
@property(readonly, copy, nonatomic) NSString *defaultMessage; // @synthesize defaultMessage=_defaultMessage;
@property(readonly, copy, nonatomic) NSString *messageBoxTitle; // @synthesize messageBoxTitle=_messageBoxTitle;
@property(readonly, copy, nonatomic) NSString *messageHostPageHeader; // @synthesize messageHostPageHeader=_messageHostPageHeader;

@end

