//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ALXActionPreprocessorFactory : NSObject
{
    NSArray *_actions;
    NSArray *_preprocessors;
}

@property(retain, nonatomic) NSArray *preprocessors; // @synthesize preprocessors=_preprocessors;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (id)process;
- (id)initWithActions:(id)arg1;
- (id)initWithActions:(id)arg1 preprocessors:(id)arg2;

@end

