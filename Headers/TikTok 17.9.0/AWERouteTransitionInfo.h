//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UIViewController;

@interface AWERouteTransitionInfo : NSObject
{
    NSString *_URLString;
    NSDictionary *_paramsDictionary;
    UIViewController *_targetViewController;
    UIViewController *_sourceViewController;
    long long _transitionType;
    CDUnknownBlockType _transitionCompletion;
}

@property(copy, nonatomic) CDUnknownBlockType transitionCompletion; // @synthesize transitionCompletion=_transitionCompletion;
@property(nonatomic) long long transitionType; // @synthesize transitionType=_transitionType;
@property(retain, nonatomic) UIViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(retain, nonatomic) UIViewController *targetViewController; // @synthesize targetViewController=_targetViewController;
@property(copy, nonatomic) NSDictionary *paramsDictionary; // @synthesize paramsDictionary=_paramsDictionary;
@property(copy, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
- (void).cxx_destruct;
- (id)init;

@end

