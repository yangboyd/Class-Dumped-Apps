//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mantle/MTLModel.h>

#import "MTLJSONSerializing-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSURL;

@interface RDKLinkPreviewItem : MTLModel <MTLJSONSerializing, NSSecureCoding>
{
    double _width;
    double _height;
    NSURL *_URL;
}

+ (id)URLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

