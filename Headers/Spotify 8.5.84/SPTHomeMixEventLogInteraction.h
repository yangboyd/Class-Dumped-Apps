//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTHomeMixEvent.h"

@protocol SPTUBIInteractionEvent;

@interface SPTHomeMixEventLogInteraction : SPTHomeMixEvent
{
    id <SPTUBIInteractionEvent> _ubiInteraction;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTUBIInteractionEvent> ubiInteraction; // @synthesize ubiInteraction=_ubiInteraction;
- (id)initWithUbiInteraction:(id)arg1;

@end

