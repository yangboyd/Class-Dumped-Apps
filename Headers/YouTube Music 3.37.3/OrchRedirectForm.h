//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, OrchAuthInfo, OrchButton, OrchFormHeader, OrchInfoMessage, OrchSimpleForm;

@interface OrchRedirectForm : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) OrchInfoMessage *abortedErrorMessage; // @dynamic abortedErrorMessage;
@property(nonatomic) _Bool acceptThirdPartyCookies; // @dynamic acceptThirdPartyCookies;
@property(retain, nonatomic) OrchSimpleForm *additionalForm; // @dynamic additionalForm;
@property(retain, nonatomic) OrchAuthInfo *authInfo; // @dynamic authInfo;
@property(copy, nonatomic) NSString *errorMessageNonRetryableErrorHtml; // @dynamic errorMessageNonRetryableErrorHtml;
@property(copy, nonatomic) NSString *errorMessageRetryableErrorHtml; // @dynamic errorMessageRetryableErrorHtml;
@property(copy, nonatomic) NSString *errorMessageUnsupportedURLHtml; // @dynamic errorMessageUnsupportedURLHtml;
@property(copy, nonatomic) NSString *errorMessageWhitelistErrorHtml; // @dynamic errorMessageWhitelistErrorHtml;
@property(retain, nonatomic) OrchFormHeader *formHeader; // @dynamic formHeader;
@property(nonatomic) _Bool hasAbortedErrorMessage; // @dynamic hasAbortedErrorMessage;
@property(nonatomic) _Bool hasAcceptThirdPartyCookies; // @dynamic hasAcceptThirdPartyCookies;
@property(nonatomic) _Bool hasAdditionalForm; // @dynamic hasAdditionalForm;
@property(nonatomic) _Bool hasAuthInfo; // @dynamic hasAuthInfo;
@property(nonatomic) _Bool hasErrorMessageNonRetryableErrorHtml; // @dynamic hasErrorMessageNonRetryableErrorHtml;
@property(nonatomic) _Bool hasErrorMessageRetryableErrorHtml; // @dynamic hasErrorMessageRetryableErrorHtml;
@property(nonatomic) _Bool hasErrorMessageUnsupportedURLHtml; // @dynamic hasErrorMessageUnsupportedURLHtml;
@property(nonatomic) _Bool hasErrorMessageWhitelistErrorHtml; // @dynamic hasErrorMessageWhitelistErrorHtml;
@property(nonatomic) _Bool hasFormHeader; // @dynamic hasFormHeader;
@property(nonatomic) _Bool hasInitialLoadingMessage; // @dynamic hasInitialLoadingMessage;
@property(nonatomic) _Bool hasInitialPostBody; // @dynamic hasInitialPostBody;
@property(nonatomic) _Bool hasInitialURL; // @dynamic hasInitialURL;
@property(nonatomic) _Bool hasInterceptNonTerminalURLRegex; // @dynamic hasInterceptNonTerminalURLRegex;
@property(nonatomic) _Bool hasInterceptTerminalURLRegex; // @dynamic hasInterceptTerminalURLRegex;
@property(nonatomic) _Bool hasLandingMessageURLRegex; // @dynamic hasLandingMessageURLRegex;
@property(nonatomic) _Bool hasMustEnforceWhitelist; // @dynamic hasMustEnforceWhitelist;
@property(nonatomic) _Bool hasRedirectLoadingMessage; // @dynamic hasRedirectLoadingMessage;
@property(nonatomic) _Bool hasSubmitButton; // @dynamic hasSubmitButton;
@property(nonatomic) _Bool hasUserAgent; // @dynamic hasUserAgent;
@property(nonatomic) _Bool hasWaitingMessage; // @dynamic hasWaitingMessage;
@property(copy, nonatomic) NSString *initialLoadingMessage; // @dynamic initialLoadingMessage;
@property(copy, nonatomic) NSString *initialPostBody; // @dynamic initialPostBody;
@property(copy, nonatomic) NSString *initialURL; // @dynamic initialURL;
@property(copy, nonatomic) NSString *interceptNonTerminalURLRegex; // @dynamic interceptNonTerminalURLRegex;
@property(copy, nonatomic) NSString *interceptTerminalURLRegex; // @dynamic interceptTerminalURLRegex;
@property(copy, nonatomic) NSString *landingMessageURLRegex; // @dynamic landingMessageURLRegex;
@property(nonatomic) _Bool mustEnforceWhitelist; // @dynamic mustEnforceWhitelist;
@property(copy, nonatomic) NSString *redirectLoadingMessage; // @dynamic redirectLoadingMessage;
@property(retain, nonatomic) NSMutableArray *requiredAuthScopeArray; // @dynamic requiredAuthScopeArray;
@property(readonly, nonatomic) unsigned long long requiredAuthScopeArray_Count; // @dynamic requiredAuthScopeArray_Count;
@property(retain, nonatomic) OrchButton *submitButton; // @dynamic submitButton;
@property(copy, nonatomic) NSString *userAgent; // @dynamic userAgent;
@property(retain, nonatomic) OrchInfoMessage *waitingMessage; // @dynamic waitingMessage;
@property(retain, nonatomic) NSMutableArray *waitingMessageInDialogArray; // @dynamic waitingMessageInDialogArray;
@property(readonly, nonatomic) unsigned long long waitingMessageInDialogArray_Count; // @dynamic waitingMessageInDialogArray_Count;
@property(retain, nonatomic) NSMutableArray *whitelistURLRegexArray; // @dynamic whitelistURLRegexArray;
@property(readonly, nonatomic) unsigned long long whitelistURLRegexArray_Count; // @dynamic whitelistURLRegexArray_Count;

@end

