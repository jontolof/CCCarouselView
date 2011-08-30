//
//  CCCarouselViewCell.m
//  CCCarouselView
//
//  Created by Jont Olof Lyttkens on 2011-08-30.
//  Copyright 2011 Mobile Strategist and iOS Developer. All rights reserved.
//

#import "CCCarouselViewCell.h"


@implementation CCCarouselViewCell
@synthesize imageView;
@synthesize label;
@synthesize detailLabel;

- (id)initWithCoder:(NSCoder *)aDecoder {
	self = [super initWithCoder: aDecoder];
	if(self) {
		// Initialization code
	}
	return self;
}

- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        // Initialization code
    }
    return self;
}

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect
{
    // Drawing code
}
*/

- (void)dealloc
{
    [super dealloc];
}

@end
