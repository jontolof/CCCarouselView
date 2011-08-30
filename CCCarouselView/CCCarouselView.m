//
//  CCCarouselView.m
//  CCCarouselView
//
//  Created by Jont Olof Lyttkens on 2011-08-29.
//  Copyright 2011 Mobile Strategist and iOS Developer. All rights reserved.
//

#import "CCCarouselView.h"

@implementation CCCarouselView
@synthesize delegate=delegate_;
@synthesize dataSource=dataSource_;

- (void)setDelegate:(id<CCCarouselViewDelegate>)delegate {
	[super setDelegate: delegate];
	delegate_ = delegate;
}

- (id<CCCarouselViewDelegate>)delegate {
	return delegate_;
}
@end
