//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ANXBarComponentState, ANXBarComponentViewController;

@interface ANPAppBarDescriptor : NSObject
{
    ANXBarComponentViewController *_bar;
    ANXBarComponentState *_state;
}

@property(retain, nonatomic) ANXBarComponentState *state; // @synthesize state=_state;
@property(retain, nonatomic) ANXBarComponentViewController *bar; // @synthesize bar=_bar;
- (void).cxx_destruct;
- (id)description;

@end

