//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Persona/SVGElement.h>

#import <Persona/ConverterSVGToCALayer-Protocol.h>

@class NSString, NodeList;

@interface SVGSwitchElement : SVGElement <ConverterSVGToCALayer>
{
    NodeList *_visibleChildNodes;
}

- (void).cxx_destruct;
- (void)layoutLayer:(id)arg1;
@property(readonly, nonatomic) NodeList *visibleChildNodes; // @synthesize visibleChildNodes=_visibleChildNodes;
- (id)newLayer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

